/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSystemServiceServerClient : BSBasicServerClient <FBSystemServiceClient> {
    NSString * _bundleID;
    NSString * _bundlePath;
    bool  _extension;
    <FBSystemServiceFacilityClient> * _facilityClient;
    NSString * _facilityID;
    bool  _suspended;
    bool  _uiApp;
}

@property (getter=isUIApp, nonatomic) bool UIApp;
@property (nonatomic, readonly, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *bundlePath;
@property (nonatomic, readonly, retain) NSObject<OS_xpc_object> *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExtension, nonatomic) bool extension;
@property (nonatomic, retain) <FBSystemServiceFacilityClient> *facilityClient;
@property (nonatomic, retain) NSString *facilityID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly, retain) FBProcess *process;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic, readonly) bool suspended;

- (id)bundleID;
- (id)bundlePath;
- (void)dealloc;
- (id)description;
- (id)facilityClient;
- (id)facilityID;
- (id)initWithConnection:(id)arg1;
- (bool)isExtension;
- (bool)isSuspended;
- (bool)isUIApp;
- (int)pid;
- (id)process;
- (void)resume;
- (void)setBundlePath:(id)arg1;
- (void)setExtension:(bool)arg1;
- (void)setFacilityClient:(id)arg1;
- (void)setFacilityID:(id)arg1;
- (void)setUIApp:(bool)arg1;
- (void)suspend;

@end
