/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSStoragePlugin : NSObject {
    NSString * _identifier;
    NSArray * _tips;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSArray *tips;

- (void).cxx_destruct;
- (id)documentAppIdentifiers;
- (id)documentSpecifiersForApp:(id)arg1;
- (id)externDataSizeAppIdentifiers;
- (long long)externDataSizeForApp:(id)arg1;
- (id)identifier;
- (void)notifyUsageChanged;
- (void)reloadTips;
- (void)setIdentifier:(id)arg1;
- (void)setTips:(id)arg1;
- (id)tips;

@end