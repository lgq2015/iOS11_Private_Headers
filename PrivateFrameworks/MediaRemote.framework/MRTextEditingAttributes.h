/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTextEditingAttributes : NSObject <NSMutableCopying> {
    struct _MRTextInputTraits { 
        unsigned int autocapitalizationType; 
        unsigned int autocorrectionType; 
        unsigned int spellcheckingType; 
        unsigned int keyboardType; 
        unsigned int returnKeyType; 
        struct { 
            long long location; 
            long long length; 
        } validTextRange; 
        bool enablesReturnKeyAutomatically; 
        bool secureTextEntry; 
        long long PINEntrySeparatorIndexes[10]; 
        unsigned long long PINEntrySeparatorIndexesCount; 
    }  _inputTraits;
    NSString * _prompt;
    NSString * _title;
}

@property (nonatomic, readonly) struct _MRTextInputTraits { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { long long x_6_1_1; long long x_6_1_2; } x6; bool x7; bool x8; long long x9[10]; unsigned long long x10; } inputTraits;
@property (nonatomic, readonly) NSString *prompt;
@property (nonatomic, readonly) NSString *title;

- (id)_copyWithZone:(struct _NSZone { }*)arg1 usingConcreteClass:(Class)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithTitle:(id)arg1 prompt:(id)arg2;
- (struct _MRTextInputTraits { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { long long x_6_1_1; long long x_6_1_2; } x6; bool x7; bool x8; long long x9[10]; unsigned long long x10; })inputTraits;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)prompt;
- (id)title;

@end
