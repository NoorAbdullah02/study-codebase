wiki = wikipediaapi.Wikipedia('english')

def fetch_wikipedia_summary(query, max_sentences=2):
    """Fetch a summary of the Wikipedia page for the given query."""
    wiki = wikipediaapi.Wikipedia('english', extract_format=wikipediaapi.ExtractFormat.WIKI)  # Initialize Wikipedia API with format
    page = wiki.page(query)  # Get the Wikipedia page for the query
    if page.exists():  # Check if the page exists
        summary = page.summary.split('. ')[:max_sentences]  # Split summary into sentences and get the first few
        summary_text = '. '.join(summary)  # Join the sentences into a single text
        return summary_text + "."  # Return the summary text
    else:
        return f"Sorry, I couldn't find any information on '{query}' on Wikipedia."  # Return a failure message if page doesn't exist
