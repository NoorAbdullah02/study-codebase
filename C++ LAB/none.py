import heapq
import random
import matplotlib.pyplot as plt
import networkx as nx
from collections import deque
import time
import numpy as np

class City:
    def __init__(self, size=10):
        self.size = size
        self.graph = {}
        self.traffic_incidents = {}
        self.intersection_types = {}
        self.generate_road_network()

    def generate_road_network(self):

        for i in range(self.size):
            self.graph[i] = {}
            self.intersection_types[i] = "major" if random.random() > 0.7 else "minor"

        for i in range(self.size):
            num_connections = random.randint(2, min(4, self.size - 1))
            possible_connections = list(range(self.size))
            possible_connections.remove(i)
            connections = random.sample(possible_connections, num_connections)

            for j in connections:
                traffic_weight = random.randint(1, 10)
                self.graph[i][j] = traffic_weight
                self.graph[j][i] = traffic_weight

    def add_traffic_incident(self, road_start, road_end, severity=5):

        if road_end in self.graph[road_start]:
            original_weight = self.graph[road_start][road_end]
            self.graph[road_start][road_end] += severity
            self.graph[road_end][road_start] += severity

            incident_key = tuple(sorted([road_start, road_end]))
            self.traffic_incidents[incident_key] = {
                'original_weight': original_weight,
                'severity': severity
            }
            print(f"Traffic incident added between intersections {road_start} and {road_end}")
            return True
        else:
            print(f"ERROR: No road exists between intersections {road_start} and {road_end}")
            return False

    def reset_traffic_incident(self, road_start, road_end):

        incident_key = tuple(sorted([road_start, road_end]))
        if incident_key in self.traffic_incidents:
            original_weight = self.traffic_incidents[incident_key]['original_weight']
            self.graph[road_start][road_end] = original_weight
            self.graph[road_end][road_start] = original_weight
            del self.traffic_incidents[incident_key]
            print(f"Traffic incident between intersections {road_start} and {road_end} has been cleared")
            return True
        else:
            print(f"No active traffic incident between intersections {road_start} and {road_end}")
            return False

    def reset_all_traffic_incidents(self):

        if not self.traffic_incidents:
            print("No active traffic incidents to clear")
            return False

        for (node1, node2), incident_data in self.traffic_incidents.items():
            original_weight = incident_data['original_weight']
            self.graph[node1][node2] = original_weight
            self.graph[node2][node1] = original_weight

        incident_count = len(self.traffic_incidents)
        self.traffic_incidents = {}
        print(f"All {incident_count} traffic incidents have been cleared")
        return True

    def remove_road(self, road_start, road_end):

        if road_end in self.graph[road_start]:
            del self.graph[road_start][road_end]
            del self.graph[road_end][road_start]

            incident_key = tuple(sorted([road_start, road_end]))
            if incident_key in self.traffic_incidents:
                del self.traffic_incidents[incident_key]

            print(f"Road between intersections {road_start} and {road_end} has been closed")
            return True
        else:
            print(f"ERROR: No road exists between intersections {road_start} and {road_end}")
            return False

    def add_road(self, road_start, road_end, traffic_weight=5):

        if road_start not in self.graph or road_end not in self.graph:
            print(f"ERROR: One or both intersections don't exist in the city")
            return False

        if road_end in self.graph[road_start]:
            print(f"ERROR: Road already exists between intersections {road_start} and {road_end}")
            return False

        self.graph[road_start][road_end] = traffic_weight
        self.graph[road_end][road_start] = traffic_weight
        print(f"New road added between intersections {road_start} and {road_end}")
        return True

    def adjust_traffic_weight(self, road_start, road_end, new_weight):
        if road_end in self.graph[road_start]:
            old_weight = self.graph[road_start][road_end]
            self.graph[road_start][road_end] = new_weight
            self.graph[road_end][road_start] = new_weight
            incident_key = tuple(sorted([road_start, road_end]))
            if incident_key in self.traffic_incidents:
                self.traffic_incidents[incident_key]['original_weight'] = new_weight
            print(f"Traffic weight between intersections{road_start}and{road_end} updated from{old_weight}to{new_weight}")
            return True
        else:
            print(f"ERROR: No road exists between intersections {road_start} and {road_end}")
            return False
    def bfs_shortest_path(self, start, end):
        if start == end:
            return [start]
        visited = set()
        queue = deque([(start, [start])])
        while queue:
            current, path = queue.popleft()
            if current == end:
                return path
            if current not in visited:
                visited.add(current)
                for neighbor in self.graph[current]:
                    if neighbor not in visited:
                        queue.append((neighbor, path + [neighbor]))
        return None  

    def dijkstra_shortest_path(self, start, end):
        if start == end:
            return [start], 0
        pq = [(0, start, [start])]
        visited = set()
        while pq:
            weight, current, path = heapq.heappop(pq)
            if current == end:
                return path, weight
            if current not in visited:
                visited.add(current)
                for neighbor, traffic in self.graph[current].items():
                    if neighbor not in visited:
                        heapq.heappush(pq, (weight + traffic, neighbor, path + [neighbor]))
        return None, float('inf')  

    def calculate_path_weight(self, path):

        if not path or len(path) < 2:
            return 0
        total_weight = 0
        for i in range(len(path) - 1):
            if path[i + 1] in self.graph[path[i]]:
                total_weight += self.graph[path[i]][path[i + 1]]
            else:
                return float('inf')  
        return total_weight

    def visualize(self, path1=None, path2=None, start=None, end=None, path1_color='red', path2_color='blue',
                  path1_label=None, path2_label=None, title="City Road Network with Traffic Weights"):

        G = nx.Graph()
        for node, neighbors in self.graph.items():
            for neighbor, weight in neighbors.items():
                G.add_edge(node, neighbor, weight=weight)
        pos = nx.spring_layout(G, seed=42)  
        plt.figure(figsize=(12, 8))
        nx.draw_networkx_edges(G, pos, width=1.0, alpha=0.5)
        path_edges = []
        if path1 and len(path1) > 1:
            path1_edges = [(path1[i], path1[i + 1]) for i in range(len(path1) - 1)]
            nx.draw_networkx_edges(G, pos, edgelist=path1_edges, width=4, edge_color=path1_color, label=path1_label)
            path_edges.extend(path1_edges)
        if path2 and len(path2) > 1:
            path2_edges = [(path2[i], path2[i + 1]) for i in range(len(path2) - 1)]
            nx.draw_networkx_edges(G, pos, edgelist=path2_edges, width=4, edge_color=path2_color, label=path2_label)
            path_edges.extend(path2_edges)
        node_colors = []
        node_sizes = []
        for node in G.nodes():
            if node == start:
                node_colors.append('green')
                node_sizes.append(900)  
            elif node == end:
                node_colors.append('purple')
                node_sizes.append(900)  
            elif self.intersection_types[node] == "major":
                node_colors.append('orange')
                node_sizes.append(700)
            else:
                node_colors.append('skyblue')
                node_sizes.append(500)

        nx.draw_networkx_nodes(G, pos, node_size=node_sizes, node_color=node_colors)

        nx.draw_networkx_labels(G, pos, font_size=12, font_weight='bold')

        edge_labels = {(node, neighbor): weight for node, neighbors in self.graph.items()
                       for neighbor, weight in neighbors.items()}
        nx.draw_networkx_edge_labels(G, pos, edge_labels=edge_labels, font_size=10)

        legend_items = []
        if path1_label and path1:
            legend_items.append(plt.Line2D([0], [0], color=path1_color, lw=4, label=path1_label))
        if path2_label and path2:
            legend_items.append(plt.Line2D([0], [0], color=path2_color, lw=4, label=path2_label))

        legend_items.extend([
            plt.Line2D([0], [0], marker='o', color='w', markerfacecolor='green', markersize=15, label='Start'),
            plt.Line2D([0], [0], marker='o', color='w', markerfacecolor='purple', markersize=15, label='End'),
            plt.Line2D([0], [0], marker='o', color='w', markerfacecolor='orange', markersize=15,label='Major Intersection'),
            plt.Line2D([0], [0], marker='o', color='w', markerfacecolor='skyblue', markersize=15,label='Minor Intersection')])

        if legend_items:
            plt.legend(handles=legend_items, loc='best')

        plt.title(title)
        plt.axis('off')
        plt.tight_layout()
        plt.show()

    def visualize_traffic_flow(self, paths=None, flow_values=None):

        G = nx.Graph()

        for node, neighbors in self.graph.items():
            for neighbor, weight in neighbors.items():
                G.add_edge(node, neighbor, weight=weight)

        pos = nx.spring_layout(G, seed=42)

        if flow_values is None:
            flow_values = {}
            for node, neighbors in self.graph.items():
                for neighbor, weight in neighbors.items():
                    edge = tuple(sorted([node, neighbor]))
                    if edge not in flow_values:

                        flow_values[edge] = max(1, 11 - weight)

        if paths:
            for path in paths:
                for i in range(len(path) - 1):
                    edge = tuple(sorted([path[i], path[i + 1]]))
                    if edge in flow_values:
                        flow_values[edge] += 2
                    else:
                        flow_values[edge] = 2

        plt.figure(figsize=(12, 8))

        node_colors = []
        node_sizes = []

        for node in G.nodes():
            if self.intersection_types[node] == "major":
                node_colors.append('orange')
                node_sizes.append(700)
            else:
                node_colors.append('skyblue')
                node_sizes.append(500)

        nx.draw_networkx_nodes(G, pos, node_size=node_sizes, node_color=node_colors)

        for edge in G.edges():
            sorted_edge = tuple(sorted(edge))
            flow = flow_values.get(sorted_edge, 1)
            weight = self.graph[edge[0]][edge[1]]

            if weight >= 8:
                color = 'red'
            elif weight >= 5:
                color = 'orange'
            else:
                color = 'green'

            nx.draw_networkx_edges(G, pos, edgelist=[edge], width=flow,edge_color=color, alpha=0.7)

        nx.draw_networkx_labels(G, pos, font_size=12, font_weight='bold')

        edge_labels = {(node, neighbor): weight for node, neighbors in self.graph.items()
                       for neighbor, weight in neighbors.items()}
        nx.draw_networkx_edge_labels(G, pos, edge_labels=edge_labels, font_size=10)

        legend_items = [
            plt.Line2D([0], [0], color='green', lw=4, label='Light Traffic (1-4)'),
            plt.Line2D([0], [0], color='orange', lw=4, label='Medium Traffic (5-7)'),
            plt.Line2D([0], [0], color='red', lw=4, label='Heavy Traffic (8-10)')]

        legend_items.extend([
            plt.Line2D([0], [0], marker='o', color='w', markerfacecolor='orange', markersize=15,
                       label='Major Intersection'),
            plt.Line2D([0], [0], marker='o', color='w', markerfacecolor='skyblue', markersize=15,
                       label='Minor Intersection')])

        plt.legend(handles=legend_items, loc='best')

        plt.title("City Traffic Flow Visualization")
        plt.axis('off')
        plt.tight_layout()
        plt.show()


def compare_algorithms(city, start, end):

    print(f"\nRouting from intersection {start} to {end}:")

    bfs_start_time = time.time()
    bfs_path = city.bfs_shortest_path(start, end)
    bfs_time = time.time() - bfs_start_time

    bfs_weight = city.calculate_path_weight(bfs_path)

    dijkstra_start_time = time.time()
    dijkstra_path, dijkstra_weight = city.dijkstra_shortest_path(start, end)
    dijkstra_time = time.time() - dijkstra_start_time

    print("\nBFS Path (fewest intersections):")
    print(f"  Path: {bfs_path}")
    print(f"  Number of intersections: {len(bfs_path)}")
    print(f"  Total traffic weight: {bfs_weight}")
    print(f"  Computation time: {bfs_time:.6f} seconds")

    print("\nDijkstra Path (minimum traffic):")
    print(f"  Path: {dijkstra_path}")
    print(f"  Number of intersections: {len(dijkstra_path)}")
    print(f"  Total traffic weight: {dijkstra_weight}")
    print(f"  Computation time: {dijkstra_time:.6f} seconds")

    optimal_path, optimal_reason = determine_optimal_path(
        bfs_path, bfs_weight, bfs_time,
        dijkstra_path, dijkstra_weight, dijkstra_time)

    print(f"\nOptimal Path Recommendation: {optimal_reason}")

    print("\nVisualizing both paths for comparison:")
    city.visualize(
        path1=bfs_path,
        path2=dijkstra_path,
        start=start,
        end=end,
        path1_color='blue',
        path2_color='red',
        path1_label='BFS Path',
        path2_label='Dijkstra Path'
    )

    return bfs_path, dijkstra_path, optimal_path


def determine_optimal_path(bfs_path, bfs_weight, bfs_time,dijkstra_path, dijkstra_weight, dijkstra_time):

    path_diff = len(dijkstra_path) - len(bfs_path)
    weight_diff = bfs_weight - dijkstra_weight

    if bfs_path == dijkstra_path:
        return bfs_path, "Both algorithms found the same path, which is optimal for both distance and traffic."

    if path_diff <= 0:
        return dijkstra_path, "Dijkstra's path is optimal - it has both minimal traffic and shortest distance."

    if weight_diff <= 0:
        return bfs_path, "BFS path is optimal - it has both minimal distance and lowest traffic."

    pct_longer_path = path_diff / len(bfs_path) * 100
    pct_heavier_traffic = weight_diff / dijkstra_weight * 100

    if pct_longer_path > 30 and pct_heavier_traffic < 20:
        return bfs_path, f"BFS path is optimal - {pct_longer_path:.1f}% shorter route with only {pct_heavier_traffic:.1f}% more traffic."
    elif pct_heavier_traffic > 40:
        return dijkstra_path, f"Dijkstra's path is optimal - reduces traffic by {pct_heavier_traffic:.1f}% with only {pct_longer_path:.1f}% longer distance."
    elif pct_longer_path < 15:
        return dijkstra_path, f"Dijkstra's path is optimal - only {pct_longer_path:.1f}% longer but reduces traffic by {pct_heavier_traffic:.1f}%."
    else:
        if any(edge in dijkstra_path for edge in range(len(dijkstra_path) - 1) if
               dijkstra_path[edge] in bfs_path and dijkstra_path[edge + 1] in bfs_path and
               bfs_path.index(dijkstra_path[edge + 1]) - bfs_path.index(dijkstra_path[edge]) == 1):
            return dijkstra_path, f"Dijkstra's path is optimal - strategically avoids heavy traffic areas with only {pct_longer_path:.1f}% longer route."
        else:
            return bfs_path, f"BFS path is optimal - significantly shorter route ({pct_longer_path:.1f}% difference) and traffic difference ({pct_heavier_traffic:.1f}%) is acceptable."


def simulate_traffic_changes(city, start, end):

    print("\n=== Initial Route ===")
    initial_path, initial_weight = city.dijkstra_shortest_path(start, end)
    print(f"Initial optimal path: {initial_path}")
    print(f"Initial traffic weight: {initial_weight}")
    city.visualize(path1=initial_path, start=start, end=end, path1_label="Initial Route")

    if len(initial_path) > 2:
        incident_start = initial_path[1]
        incident_end = initial_path[2]

        print("\n=== Adding Traffic Incident ===")
        city.add_traffic_incident(incident_start, incident_end, severity=8)

        new_path, new_weight = city.dijkstra_shortest_path(start, end)
        print(f"New optimal path: {new_path}")
        print(f"New traffic weight: {new_weight}")
        city.visualize(
            path1=initial_path,
            path2=new_path,
            start=start,
            end=end,
            path1_color='orange',
            path2_color='green',
            path1_label='Original Route',
            path2_label='Re-routed Path'
        )

        print("\n=== Resetting Traffic Incident ===")
        city.reset_traffic_incident(incident_start, incident_end)

        reset_path, reset_weight = city.dijkstra_shortest_path(start, end)
        print(f"Route after incident cleared: {reset_path}")
        print(f"Traffic weight after incident cleared: {reset_weight}")
        city.visualize(path1=reset_path, start=start, end=end, path1_label="Restored Route")


def simulate_complex_incident(city):

    print("\n=== Simulating Complex Traffic Incident Scenario ===")
    source = random.randint(0, city.size - 1)
    dest = random.randint(0, city.size - 1)
    while dest == source:
        dest = random.randint(0, city.size - 1)

    initial_path, initial_weight = city.dijkstra_shortest_path(source, dest)
    print(f"\nInitial optimal path from {source} to {dest}: {initial_path}")
    print(f"Initial traffic weight: {initial_weight}")

    city.visualize(
        path1=initial_path,
        start=source,
        end=dest,
        path1_color='blue',
        path1_label='Initial Path',
        title="Initial Route Before Incidents"
    )

    print("\n=== Adding Multiple Traffic Incidents ===")

    incidents = []
    if len(initial_path) > 2:
        incident1_start = initial_path[1]
        incident1_end = initial_path[2]
        severity1 = random.randint(5, 10)
        if city.add_traffic_incident(incident1_start, incident1_end, severity1):
            incidents.append((incident1_start, incident1_end))
            print(f"Incident 1: Major accident between intersections {incident1_start} and {incident1_end}")

    available_edges = [(u, v) for u in city.graph for v in city.graph[u] if u < v and (u, v) not in incidents]
    if available_edges:
        incident2_start, incident2_end = random.choice(available_edges)
        severity2 = random.randint(3, 8)
        if city.add_traffic_incident(incident2_start, incident2_end, severity2):
            incidents.append((incident2_start, incident2_end))
            print(f"Incident 2: Construction work between intersections {incident2_start} and {incident2_end}")

    available_edges = [(u, v) for u in city.graph for v in city.graph[u] if u < v and (u, v) not in incidents]
    if available_edges:
        incident3_start, incident3_end = random.choice(available_edges)
        if city.remove_road(incident3_start, incident3_end):
            print(f"Incident 3: Road closure between intersections {incident3_start} and {incident3_end}")

    new_path, new_weight = city.dijkstra_shortest_path(source, dest)
    print(f"\nNew optimal path after incidents: {new_path}")
    print(f"New traffic weight: {new_weight}")

    weight_difference = new_weight - initial_weight
    path_difference = len(new_path) - len(initial_path)

    print(f"\nDetour analysis:")
    print(f"  Increase in traffic weight: {weight_difference} ({(weight_difference / initial_weight * 100):.1f}%)")
    print(f"  Additional intersections: {path_difference}")

    city.visualize(
        path1=initial_path,
        path2=new_path,
        start=source,
        end=dest,
        path1_color='gray',
        path2_color='red',
        path1_label='Original Path (Now Blocked)',
        path2_label='New Detour Path',
        title="Complex Incident Scenario - Detour Path"
    )

    if weight_difference > 10 or path_difference > 3:
        print(
            "\nRECOMMENDATION: Deploy traffic controllers at major intersections to manage increased flow on detour route.")
    else:
        print("\nRECOMMENDATION: Standard traffic management sufficient for this detour scenario.")

    print("\n=== Clearing All Traffic Incidents ===")
    city.reset_all_traffic_incidents()

    final_path, final_weight = city.dijkstra_shortest_path(source, dest)
    print(f"\nPath after clearing incidents: {final_path}")
    print(f"Traffic weight after clearing incidents: {final_weight}")

    city.visualize(
        path1=final_path,
        start=source,
        end=dest,
        path1_color='green',
        path1_label='Restored Path',
        title="Routes After Clearing Incidents"
    )


def simulate_traffic_flow(city):

    print("\n=== Simulating City-wide Traffic Flow ===")

    num_routes = min(15, city.size * 2)
    routes = []

    print(f"Simulating {num_routes} active routes across the city...")

    for _ in range(num_routes):
        source = random.randint(0, city.size - 1)
        dest = random.randint(0, city.size - 1)

        if source == dest:
            continue

        path, _ = city.dijkstra_shortest_path(source, dest)
        if path:
            routes.append(path)

    flow_values = {}

    for node, neighbors in city.graph.items():
        for neighbor, weight in neighbors.items():
            edge = tuple(sorted([node, neighbor]))
            if edge not in flow_values:
                flow_values[edge] = max(1, (11 - weight) / 2)

    for path in routes:
        for i in range(len(path) - 1):
            edge = tuple(sorted([path[i], path[i + 1]]))
            if edge in flow_values:
                flow_values[edge] += 1.5  # Increase flow for actual routes
            else:
                flow_values[edge] = 1.5

    congestion_threshold = 3.0
    hotspots = {edge: flow for edge, flow in flow_values.items()
                if flow > congestion_threshold and city.graph[edge[0]][edge[1]] > 6}

    print("\nTraffic Flow Analysis:")
    print(f"  Total active routes: {len(routes)}")
    print(f"  Congestion hotspots detected: {len(hotspots)}")

    if hotspots:
        print("\nTop congestion hotspots:")
        sorted_hotspots = sorted(hotspots.items(), key=lambda x: x[1], reverse=True)[:3]
        for (u, v), flow in sorted_hotspots:
            print(f"  Intersections {u} and {v}: Flow value {flow:.1f}, Traffic weight {city.graph[u][v]}")

    print("\nVisualizing city-wide traffic flow...")
    city.visualize_traffic_flow(paths=routes, flow_values=flow_values)

    print("\nTime-based Traffic Simulation:")

    times = ["Morning Rush Hour (7-9 AM)",
             "Midday (11 AM - 1 PM)",
             "Evening Rush Hour (4-6 PM)"]

    for time_period in times:
        print(f"\n{time_period} Traffic Pattern:")

        time_flow = {}
        for edge, flow in flow_values.items():

            if "Morning" in time_period:
                if edge[0] > edge[1]:
                    time_flow[edge] = flow * 1.5
                else:
                    time_flow[edge] = flow * 0.8
            elif "Evening" in time_period:
                if edge[0] < edge[1]:
                    time_flow[edge] = flow * 1.5
                else:
                    time_flow[edge] = flow * 0.8

            else:
                time_flow[edge] = flow * random.uniform(0.8, 1.2)

        time_hotspots = {edge: flow for edge, flow in time_flow.items()
                         if flow > congestion_threshold and city.graph[edge[0]][edge[1]] > 6}

        print(f"  Congestion hotspots: {len(time_hotspots)}")

        city.visualize_traffic_flow(flow_values=time_flow)

def user_input_mode():

    print("\n=== Traffic Routing Interactive Mode ===")

    while True:
        try:
            size = int(input("\nEnter the number of intersections for the city (5-20): "))
            if 5 <= size <= 20:
                break
            else:
                print("Please enter a number between 5 and 20.")
        except ValueError:
            print("Please enter a valid number.")

    city = City(size=size)
    print(f"\nCreated city with {size} intersections.")
    city.visualize()

    while True:
        print("\n=== MENU ===")
        print("1. Find route between intersections")
        print("2. Add traffic incident")
        print("3. Reset specific traffic incident")
        print("4. Reset all traffic incidents")
        print("5. Add new road")
        print("6. Remove road")
        print("7. Adjust traffic weight")
        print("8. View city map")
        print("9. Simulate traffic flow")
        print("10. Compare routing algorithms")
        print("11. Simulate changing traffic conditions")
        print("12. Modify city layout")
        print("13. Simulate complex incident")
        print("14. Determine optimal path")
        print("15. Exit")

        choice = input("\nEnter your choice (1-15): ")

        if choice == '1':
            try:
                start = int(input(f"Enter starting intersection (0-{size - 1}): "))
                end = int(input(f"Enter destination intersection (0-{size - 1}): "))

                if 0 <= start < size and 0 <= end < size:
                    compare_algorithms(city, start, end)
                else:
                    print(f"Intersections must be between 0 and {size - 1}.")
            except ValueError:
                print("Please enter valid intersection numbers.")

        elif choice == '2':
            try:
                start = int(input(f"Enter first intersection of road (0-{size - 1}): "))
                end = int(input(f"Enter second intersection of road (0-{size - 1}): "))
                severity = int(input("Enter incident severity (1-10): "))

                if 0 <= start < size and 0 <= end < size and 1 <= severity <= 10:
                    city.add_traffic_incident(start, end, severity)
                    city.visualize(start=start, end=end)
                else:
                    print("Invalid input values.")
            except ValueError:
                print("Please enter valid numbers.")

        elif choice == '3':
            try:
                start = int(input(f"Enter first intersection of incident road (0-{size - 1}): "))
                end = int(input(f"Enter second intersection of incident road (0-{size - 1}): "))

                if 0 <= start < size and 0 <= end < size:
                    city.reset_traffic_incident(start, end)
                    city.visualize()
                else:
                    print(f"Intersections must be between 0 and {size - 1}.")
            except ValueError:
                print("Please enter valid intersection numbers.")

        elif choice == '4':
            city.reset_all_traffic_incidents()
            city.visualize()

        elif choice == '5':
            try:
                start = int(input(f"Enter first intersection for new road (0-{size - 1}): "))
                end = int(input(f"Enter second intersection for new road (0-{size - 1}): "))
                weight = int(input("Enter traffic weight for new road (1-10): "))

                if 0 <= start < size and 0 <= end < size and 1 <= weight <= 10:
                    city.add_road(start, end, weight)
                    city.visualize()
                else:
                    print("Invalid input values.")
            except ValueError:
                print("Please enter valid numbers.")

        elif choice == '6':
            try:
                start = int(input(f"Enter first intersection of road to remove (0-{size - 1}): "))
                end = int(input(f"Enter second intersection of road to remove (0-{size - 1}): "))

                if 0 <= start < size and 0 <= end < size:
                    city.remove_road(start, end)
                    city.visualize()
                else:
                    print(f"Intersections must be between 0 and {size - 1}.")
            except ValueError:
                print("Please enter valid intersection numbers.")

        elif choice == '7':
            try:
                start = int(input(f"Enter first intersection of road (0-{size - 1}): "))
                end = int(input(f"Enter second intersection of road (0-{size - 1}): "))
                weight = int(input("Enter new traffic weight (1-10): "))

                if 0 <= start < size and 0 <= end < size and 1 <= weight <= 10:
                    city.adjust_traffic_weight(start, end, weight)
                    city.visualize()
                else:
                    print("Invalid input values.")
            except ValueError:
                print("Please enter valid numbers.")

        elif choice == '8':
            city.visualize()

        elif choice == '15':
            print("Exiting program. Goodbye!")
            break

        elif choice == '10':
            try:
                start = int(input(f"Enter starting intersection (0-{size - 1}): "))
                end = int(input(f"Enter destination intersection (0-{size - 1}): "))

                if 0 <= start < size and 0 <= end < size:
                    compare_algorithms(city, start, end)
                else:
                    print(f"Intersections must be between 0 and {size - 1}.")
            except ValueError:
                print("Please enter valid intersection numbers.")

        elif choice == '11':
            try:
                start = int(input(f"Enter starting intersection (0-{size - 1}): "))
                end = int(input(f"Enter destination intersection (0-{size - 1}): "))

                if 0 <= start < size and 0 <= end < size:
                    simulate_traffic_changes(city, start, end)
                else:
                    print(f"Intersections must be between 0 and {size - 1}.")
            except ValueError:
                print("Please enter valid intersection numbers.")

        elif choice == '12':
            print("\nModifying city layout...")
            for _ in range(2):
                start = random.randint(0, size - 1)
                end = random.randint(0, size - 1)
                if start != end:
                    city.add_road(start, end, random.randint(1, 10))

            edges = [(u, v) for u in city.graph for v in city.graph[u] if u < v]
            if edges:
                edge = random.choice(edges)
                city.remove_road(edge[0], edge[1])

            print("City layout modified with new and removed roads.")
            city.visualize()

        elif choice == '13':
            simulate_complex_incident(city)

        elif choice == '14':
            try:
                start = int(input(f"Enter starting intersection (0-{size - 1}): "))
                end = int(input(f"Enter destination intersection (0-{size - 1}): "))

                if 0 <= start < size and 0 <= end < size:
                    bfs_path = city.bfs_shortest_path(start, end)
                    bfs_weight = city.calculate_path_weight(bfs_path)
                    bfs_time = 0

                    dijkstra_path, dijkstra_weight = city.dijkstra_shortest_path(start, end)
                    dijkstra_time = 0

                    optimal_path, reason = determine_optimal_path(
                        bfs_path, bfs_weight, bfs_time,
                        dijkstra_path, dijkstra_weight, dijkstra_time)

                    print(f"\nOptimal route recommendation: {reason}")

                    city.visualize(
                        path1=optimal_path,
                        start=start,
                        end=end,
                        path1_color='green',
                        path1_label='Optimal Path'
                    )
                else:
                    print(f"Intersections must be between 0 and {size - 1}.")
            except ValueError:
                print("Please enter valid intersection numbers.")

        elif choice == '9':
            simulate_traffic_flow(city)

        else:
            print("Invalid choice. Please enter a number between 1 and 15.")


def main():
    print("=== Traffic Routing in a City ===")
    print("1. Run demo with preset scenarios")
    print("2. Enter interactive mode")

    choice = input("\nEnter your choice (1-2): ")

    if choice == '1':
        print("\nCreating city road network...")
        city = City(size=10)

        print("\nInitial city road network:")
        city.visualize()

        start_intersection = 0
        end_intersection = 9
        compare_algorithms(city, start_intersection, end_intersection)

        simulate_traffic_changes(city, start_intersection, end_intersection)

        simulate_complex_incident(city)

        simulate_traffic_flow(city)

        print("\nDemonstrating additional features:")

        new_road_start = 2
        new_road_end = 8
        city.add_road(new_road_start, new_road_end, traffic_weight=2)

        road_to_close_start = 4
        road_to_close_end = 5
        city.remove_road(road_to_close_start, road_to_close_end)

        print("\nCity road network after modifications:")
        city.visualize()
        compare_algorithms(city, start_intersection, end_intersection)

    elif choice == '2':
        user_input_mode()

    else:
        print("Invalid choice. Exiting program.")

if __name__ == "__main__":
    main()