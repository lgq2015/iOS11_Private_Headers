/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TILexiconEntry : NSObject <NSCopying, NSSecureCoding> {
    NSString * _documentText;
    NSString * _userInput;
}

@property (nonatomic, readonly) NSString *documentText;
@property (nonatomic, readonly) NSString *userInput;

+ (id)entryWithDocumentText:(id)arg1 userInput:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)documentText;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)userInput;

@end
