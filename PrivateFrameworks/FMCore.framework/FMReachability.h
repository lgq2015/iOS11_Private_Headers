/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

@interface FMReachability : NSObject {
    bool  localWiFiRef;
    struct __SCNetworkReachability { } * reachabilityRef;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg1;
+ (id)reachabilityWithHostName:(id)arg1;

- (bool)connectionRequired;
- (unsigned long long)currentReachabilityStatus;
- (void)dealloc;
- (unsigned long long)localWiFiStatusForFlags:(unsigned int)arg1;
- (unsigned long long)networkStatusForFlags:(unsigned int)arg1;
- (bool)startNotifier;
- (void)stopNotifier;

@end
