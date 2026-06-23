Action()
{
	
	web_rest("POST: https://api.restful-api.dev/collections/products/o...",
		"URL=https://api.restful-api.dev/collections/products/objects",
		"Method=POST",
		"EncType=raw",
		"Snapshot=t801396.inf",
		"Body={\r\n"
		"\"name\": \"Apple MacBook Pro 16\",\r\n"
		"\"data\": {\r\n"
		"\"year\": 2019,\r\n"
		"\"price\": 1849.99,\r\n"
		"\"CPU model\": \"Intel Core i9\",\r\n"
		"\"Hard disk size\": \"1 TB\"\r\n"
		"}\r\n"
		"}",
		HEADERS,
		"Name=x-api-key", "Value=0640e3c9-e735-4663-a561-c4fcfee9a21e", ENDHEADER,
		"Name=Content-Type", "Value=application/json", ENDHEADER,
		LAST);

	
	
	
	return 0;
}
