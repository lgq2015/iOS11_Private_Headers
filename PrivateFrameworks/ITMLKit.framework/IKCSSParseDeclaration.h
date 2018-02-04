/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKCSSParseDeclaration : IKCSSParseObject {
    bool  _important;
    NSString * _name;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _nameRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _valueRange;
}

@property (nonatomic) bool important;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } nameRange;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } valueRange;

- (void).cxx_destruct;
- (id)description;
- (bool)important;
- (id)init;
- (id)name;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })nameRange;
- (void)setImportant:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNameRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setValueRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })valueRange;

@end
