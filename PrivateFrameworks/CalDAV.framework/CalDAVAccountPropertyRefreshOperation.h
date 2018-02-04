/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation {
    bool  _fetchPrincipalSearchProperties;
}

@property (nonatomic) <CalDAVAccountPropertyRefreshDelegate> *delegate;
@property (nonatomic) bool fetchPrincipalSearchProperties;

- (bool)fetchPrincipalSearchProperties;
- (void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2;
- (void)refreshProperties;
- (void)setFetchPrincipalSearchProperties:(bool)arg1;

@end
