/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
 */

@interface EMFEmojiLocaleData : NSObject {
    struct __EmojiLocaleDataWrapper { } * _localeDataRef;
    NSString * _localeIdentifier;
}

@property (nonatomic, readonly) const struct __EmojiLocaleDataWrapper { }*emojiLocaleDataRef;
@property (nonatomic, readonly, copy) NSArray *emojiTokens;
@property (nonatomic, readonly, copy) NSString *localeIdentifier;

+ (id)emojiLocaleDataWithCEMEmojiLocaleData:(struct __EmojiLocaleDataWrapper { }*)arg1;
+ (id)emojiLocaleDataWithLocaleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)cfCompareFlagsFromNSOptions:(unsigned long long)arg1;
- (void)dealloc;
- (struct __EmojiLocaleDataWrapper { }*)emojiLocaleDataRef;
- (id)emojiTokens;
- (id)emojiTokensForOptions:(unsigned long long)arg1 presentationStyle:(int)arg2;
- (id)emojiTokensForText:(id)arg1 phoneticReading:(id)arg2 options:(unsigned long long)arg3 searchType:(int)arg4 includePrefixMatches:(bool)arg5;
- (void)enumerateSearchResultsInText:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 searchType:(int)arg4 usingBlock:(id /* block */)arg5;
- (id)initWithCEMEmojiLocaleData:(struct __EmojiLocaleDataWrapper { }*)arg1;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)localeIdentifier;

@end
