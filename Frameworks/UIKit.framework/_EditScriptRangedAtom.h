/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _EditScriptRangedAtom : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _editRange;
    NSString * _replacementText;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } editRange;
@property (nonatomic, retain) NSString *replacementText;

+ (id)atomWithEditRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementText:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })editRange;
- (id)initWithEditRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementText:(id)arg2;
- (id)replacementText;
- (void)setEditRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setReplacementText:(id)arg1;

@end