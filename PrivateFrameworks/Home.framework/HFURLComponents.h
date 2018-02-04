/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFURLComponents : NSObject {
    HFHomeKitDispatcher * _homeKitDispatcher;
    NSURL * _url;
}

@property (nonatomic, readonly) unsigned long long destination;
@property (nonatomic, readonly) HFHomeKitDispatcher *homeKitDispatcher;
@property (nonatomic, readonly) NAFuture *homeKitObjectFuture;
@property (nonatomic, readonly) NSURL *url;

+ (id)aboutResidentDeviceURL;

- (void).cxx_destruct;
- (id)_homeKitIdentifier;
- (unsigned long long)destination;
- (id)homeKitDispatcher;
- (id)homeKitObjectFuture;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 homeKitDispatcher:(id)arg2;
- (id)url;

@end
