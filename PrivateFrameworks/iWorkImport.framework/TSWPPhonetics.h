/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPPhonetics : NSObject {
    NSDictionary * _transcribers;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedDictionary;

- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)pronunciationForBaseText:(id)arg1 locale:(id)arg2 inputLanguage:(id)arg3;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (id)transcriberForBaseText:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 gettingLocale:(id*)arg3 inputLanguage:(id*)arg4;
- (id)transcriberWithIdentifier:(id)arg1;

@end
