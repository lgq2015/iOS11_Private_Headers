/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMetricsPlayActionEvent : MusicMetricsEvent {
    unsigned long long  _index;
    unsigned long long  _playActionEventType;
    long long  _shuffleType;
    NSDictionary * _storePlatformDictionary;
}

@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long playActionEventType;
@property (nonatomic) long long shuffleType;
@property (nonatomic, copy) NSDictionary *storePlatformDictionary;

- (void).cxx_destruct;
- (id)copyJSExtraInfo;
- (unsigned long long)index;
- (id)init;
- (unsigned long long)playActionEventType;
- (void)setIndex:(unsigned long long)arg1;
- (void)setPlayActionEventType:(unsigned long long)arg1;
- (void)setShuffleType:(long long)arg1;
- (void)setStorePlatformDictionary:(id)arg1;
- (long long)shuffleType;
- (id)storePlatformDictionary;

@end
