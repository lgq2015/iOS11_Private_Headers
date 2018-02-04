/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptXMLHTTPRequest : SUScriptObject {
    <SUScriptXMLHTTPRequestDelegate> * _delegate;
    NSMutableDictionary * _functions;
    SUXMLHTTPRequestOperation * _operation;
    unsigned long long  _readyState;
    SSMutableURLRequestProperties * _requestProperties;
    NSDictionary * _responseHeaders;
    NSString * _responseText;
    unsigned long long  _status;
    NSString * _statusText;
    unsigned long long  _timeout;
}

@property <SUScriptXMLHTTPRequestDelegate> *delegate;
@property (retain) WebScriptObject *onabort;
@property (retain) WebScriptObject *onerror;
@property (retain) WebScriptObject *onload;
@property (retain) WebScriptObject *onloadend;
@property (retain) WebScriptObject *onreadystatechange;
@property (retain) WebScriptObject *ontimeout;
@property (readonly) unsigned long long readyState;
@property (readonly, copy) NSString *responseText;
@property (readonly) unsigned long long status;
@property (readonly, copy) NSString *statusText;
@property unsigned long long timeout;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void).cxx_destruct;
- (void)_callFunctionWithName:(id)arg1 arguments:(id)arg2;
- (id)_className;
- (id)_scriptObjectForFunctionName:(id)arg1;
- (void)_setScriptObject:(id)arg1 forFunctionName:(id)arg2;
- (void)abort;
- (id)attributeKeys;
- (void)dealloc;
- (id)delegate;
- (id)getAllResponseHeaders;
- (id)getResponseHeader:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)onabort;
- (id)onerror;
- (id)onload;
- (id)onloadend;
- (id)onreadystatechange;
- (id)ontimeout;
- (void)openWithHTTPMethod:(id)arg1 URL:(id)arg2 isAsync:(id)arg3 username:(id)arg4 password:(id)arg5;
- (unsigned long long)readyState;
- (id)responseText;
- (id)scriptAttributeKeys;
- (void)sendWithBodyData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOnabort:(id)arg1;
- (void)setOnerror:(id)arg1;
- (void)setOnload:(id)arg1;
- (void)setOnloadend:(id)arg1;
- (void)setOnreadystatechange:(id)arg1;
- (void)setOntimeout:(id)arg1;
- (void)setTimeout:(unsigned long long)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (unsigned long long)status;
- (id)statusText;
- (unsigned long long)timeout;

@end
