/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCEndpointConfiguration : NSObject {
    NSString * _clientAPIBaseURLString;
    NSString * _notificationsBaseURLString;
}

@property (nonatomic, readonly) NSString *clientAPIBaseURLString;
@property (nonatomic, readonly) NSString *notificationsBaseURLString;

- (void).cxx_destruct;
- (id)clientAPIBaseURLString;
- (unsigned long long)hash;
- (id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)notificationsBaseURLString;

@end
