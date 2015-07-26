"""
For experimenting with concurrent and parallel computing
"""
import asyncio
import aiohttp


@asyncio.coroutine
def print_page(url):
    response = yield from aiohttp.request('GET', url)
    body = yield from response.read_and_close()
    print(body)

if __name__ == '__main__':
    loop = asyncio.get_event_loop()
    raw_html = loop.run_until_complete(print_page('http://python.org'))
    print(raw_html)
