/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDMutableLogConfig : ASDLogConfig <NSCopying>

@property (nonatomic, copy) NSString *category;
@property (nonatomic) unsigned long long environment;
@property (nonatomic, copy) NSString *subsystem;

@end
