/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNotificationChannel : NSObject {
    NSString * _channelID;
    NTPBNotificationChannel * _pbNotificationChannel;
}

@property (nonatomic, readonly) NSString *channelID;

- (void).cxx_destruct;
- (id)channelID;
- (unsigned long long)hash;
- (id)initWithChannelID:(id)arg1;
- (id)initWithPBNotificationChannel:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
