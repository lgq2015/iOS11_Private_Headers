/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@interface XMLSAXHTTPRequest : NSObject <NSURLConnectionDelegate> {
    NSURLConnection * _connection;
    bool  _invalidResponse;
    NSMutableData * _rawData;
    NSURLRequest * _request;
    struct _xmlSAXHandler { 
        int (*internalSubset)(); 
        int (*isStandalone)(); 
        int (*hasInternalSubset)(); 
        int (*hasExternalSubset)(); 
        int (*resolveEntity)(); 
        int (*getEntity)(); 
        int (*entityDecl)(); 
        int (*notationDecl)(); 
        int (*attributeDecl)(); 
        int (*elementDecl)(); 
        int (*unparsedEntityDecl)(); 
        int (*setDocumentLocator)(); 
        int (*startDocument)(); 
        int (*endDocument)(); 
        int (*startElement)(); 
        int (*endElement)(); 
        int (*reference)(); 
        int (*characters)(); 
        int (*ignorableWhitespace)(); 
        int (*processingInstruction)(); 
        int (*comment)(); 
        int (*warning)(); 
        int (*error)(); 
        int (*fatalError)(); 
        int (*getParameterEntity)(); 
        int (*cdataBlock)(); 
        int (*externalSubset)(); 
        unsigned int initialized; 
        void *_private; 
        int (*startElementNs)(); 
        int (*endElementNs)(); 
        int (*serror)(); 
    }  _saxHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)anyRequestLoading;
+ (id)authenticationFailureError;
+ (id)serviceUnavailableError;
+ (unsigned int)uniqueQueryID;

- (void)_finishedLoading;
- (void)_startedLoading;
- (void)cancel;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (id)init;
- (bool)isLoading;
- (void)loadRequest:(id)arg1;
- (void)loadStatusChanged;
- (int)parseData:(id)arg1;
- (bool)receivedValidResponse:(id)arg1;
- (id)request;
- (void)willParseData;

@end
