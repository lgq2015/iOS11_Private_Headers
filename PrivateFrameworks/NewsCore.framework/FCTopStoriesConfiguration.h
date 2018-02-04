/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTopStoriesConfiguration : NSObject {
    NSString * _channelID;
    long long  _cutoffTime;
    long long  _maximumArticleCount;
    NTPBTopStoriesConfig * _pbConfig;
    bool  _pinningEnabled;
    bool  _promotingEnabled;
    long long  _storyTypeTimeout;
    NSDictionary * _styleConfigurations;
}

@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic, readonly) long long cutoffTime;
@property (nonatomic, readonly) long long maximumArticleCount;
@property (getter=isPinningEnabled, nonatomic, readonly) bool pinningEnabled;
@property (getter=isPromotingEnabled, nonatomic, readonly) bool promotingEnabled;
@property (nonatomic, readonly) long long storyTypeTimeout;
@property (nonatomic, readonly) NSDictionary *styleConfigurations;

- (void).cxx_destruct;
- (id)channelID;
- (long long)cutoffTime;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (id)initWithPBTopStoriesConfig:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPinningEnabled;
- (bool)isPromotingEnabled;
- (long long)maximumArticleCount;
- (long long)storyTypeTimeout;
- (id)styleConfigurations;

@end
