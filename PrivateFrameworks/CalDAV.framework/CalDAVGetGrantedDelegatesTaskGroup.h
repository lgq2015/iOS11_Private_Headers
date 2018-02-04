/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVGetGrantedDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup {
    bool  _fetchPrincipalDetails;
    int  _state;
}

@property (nonatomic) bool fetchPrincipalDetails;
@property (nonatomic) int state;

- (void)_expandPropertiesWithAllowWrite:(bool)arg1;
- (void)_fetchOnlyHrefs;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)_getChildProperties;
- (id)_urlAppendingSegmentWithAllowWrite:(bool)arg1;
- (bool)fetchPrincipalDetails;
- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;
- (void)setFetchPrincipalDetails:(bool)arg1;
- (void)setState:(int)arg1;
- (void)startTaskGroup;
- (int)state;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;

@end
