/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTopStoriesStyleConfiguration : NSObject {
    FCColor * _background_color;
    FCColor * _foreground_color;
    NSString * _label;
    NTPBTopStoriesStyleConfig * _pbConfig;
    unsigned long long  _storyType;
    NSString * _stringType;
}

@property (nonatomic, readonly) FCColor *background_color;
@property (nonatomic, readonly) FCColor *foreground_color;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) unsigned long long storyType;
@property (nonatomic, readonly) NSString *stringType;

- (void).cxx_destruct;
- (id)background_color;
- (id)foreground_color;
- (unsigned long long)hash;
- (id)initWithPBTopStoriesStyleConfig:(id)arg1;
- (id)initWithStoryType:(unsigned long long)arg1 label:(id)arg2 foregroundColor:(id)arg3 backgroundColor:(id)arg4 stringType:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)label;
- (unsigned long long)storyType;
- (id)stringType;

@end
