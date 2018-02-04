/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StocksPreferences : NSObject {
    bool  _changeColorSwapped;
    NSUserDefaults * _sharedDefaults;
    bool  _textAttachmentDirectionIsRightToLeft;
    unsigned long long  _textDirection;
}

@property (getter=isChangeColorSwapped, nonatomic, readonly) bool changeColorSwapped;
@property (nonatomic, readonly) bool textAttachmentDirectionIsRightToLeft;
@property (nonatomic, readonly) unsigned long long textDirection;

+ (void)clearSharedPreferences;
+ (id)sharedPreferences;

- (void).cxx_destruct;
- (bool)boolForKey:(id)arg1;
- (id)init;
- (long long)integerForKey:(id)arg1;
- (bool)isChangeColorSwapped;
- (id)localSharedDefaults;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)resetLocale;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)stringForKey:(id)arg1;
- (void)synchronize;
- (bool)textAttachmentDirectionIsRightToLeft;
- (unsigned long long)textDirection;

@end
