/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOXPCUtil : NSObject

+ (id)createServerConnectionWithQueue:(id)arg1 debugIdentifier:(id)arg2 eventHandler:(id /* block */)arg3;
+ (id /* block */)daemonXPCConnectionCreationBlock;
+ (void)setDaemonXPCConnectionCreationBlock:(id /* block */)arg1;

@end
