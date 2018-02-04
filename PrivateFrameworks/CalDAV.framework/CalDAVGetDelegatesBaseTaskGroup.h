/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVGetDelegatesBaseTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate> {
    CalDAVGetPrincipalEmailDetailsTaskGroup * _getPrincipalEmailDetailsTaskGroup;
    NSURL * _principalURL;
    NSMutableSet * _readDetails;
    NSMutableArray * _readPrincipalURLs;
    bool  _serverSupportsExpandPropertyReport;
    NSMutableSet * _writeDetails;
    NSMutableArray * _writePrincipalURLs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CalDAVGetPrincipalEmailDetailsTaskGroup *getPrincipalEmailDetailsTaskGroup;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *principalURL;
@property (nonatomic, retain) NSMutableSet *readDetails;
@property (nonatomic, readonly, retain) NSSet *readOnlyPrincipalDetails;
@property (nonatomic, retain) NSMutableArray *readPrincipalURLs;
@property (nonatomic, readonly, retain) NSSet *readWritePrincipalDetails;
@property (nonatomic) bool serverSupportsExpandPropertyReport;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableSet *writeDetails;
@property (nonatomic, retain) NSMutableArray *writePrincipalURLs;

- (void).cxx_destruct;
- (void)_getPrincipalDetailsForURL:(id)arg1;
- (id)_mappingsForPrincipalDetails;
- (id)_popFromArray:(id)arg1;
- (void)_processDetailsFromMultiStatus:(id)arg1 allowWrite:(bool)arg2;
- (id)getPrincipalEmailDetailsTaskGroup;
- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;
- (id)principalURL;
- (id)readDetails;
- (id)readOnlyPrincipalDetails;
- (id)readPrincipalURLs;
- (id)readWritePrincipalDetails;
- (bool)serverSupportsExpandPropertyReport;
- (void)setGetPrincipalEmailDetailsTaskGroup:(id)arg1;
- (void)setPrincipalURL:(id)arg1;
- (void)setReadDetails:(id)arg1;
- (void)setReadPrincipalURLs:(id)arg1;
- (void)setServerSupportsExpandPropertyReport:(bool)arg1;
- (void)setWriteDetails:(id)arg1;
- (void)setWritePrincipalURLs:(id)arg1;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (id)writeDetails;
- (id)writePrincipalURLs;

@end
