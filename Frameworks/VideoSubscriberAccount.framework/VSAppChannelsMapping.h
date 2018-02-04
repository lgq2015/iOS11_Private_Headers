/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAppChannelsMapping : NSObject {
    NSString * _appAdamID;
    NSArray * _channelIDs;
}

@property (nonatomic, copy) NSString *appAdamID;
@property (nonatomic, copy) NSArray *channelIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appAdamID;
- (id)channelIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAppAdamID:(id)arg1;
- (void)setChannelIDs:(id)arg1;

@end
