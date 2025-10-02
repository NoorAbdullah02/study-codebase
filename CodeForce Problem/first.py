import matplotlib.pyplot as plt

# Data
python_data = [
    ('TIOBE Index Rank', 2),
    ('GitHub Repositories', 10),
    ('Job Postings', 8),
    ('Stack Overflow Questions', 9)
]

java_data = [
    ('TIOBE Index Rank', 3),
    ('GitHub Repositories', 7),
    ('Job Postings', 6),
    ('Stack Overflow Questions', 6)
]

# Create the chart
fig, ax = plt.subplots(figsize=(10, 6))

# Plot the data
ax.bar([x[0] for x in python_data], [x[1] for x in python_data], color='blue', label='Python')
ax.bar([x[0] for x in java_data], [x[1] for x in java_data], color='orange', label='Java')

# Add labels and title
ax.set_xlabel('Metric')
ax.set_ylabel('Relative Popularity')
ax.set_title('Popularity Comparison: Python vs Java')
ax.legend()

# Show the chart
plt.show()