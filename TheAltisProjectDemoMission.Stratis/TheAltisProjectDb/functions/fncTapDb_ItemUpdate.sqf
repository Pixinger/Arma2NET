private["_table"];
_table = _this select 0;
private["_itemId"];
_itemId = _this select 1;
private["_itemData"];
_itemData = _this select 2;

private["_dbResult"];	
_dbResult = "Arma2NET" callExtension format["TAP item|update|%1|%2|%3", _table, _itemId, _itemData];

private["_result"];
_result = (_dbResult == "OK"); 
_result;