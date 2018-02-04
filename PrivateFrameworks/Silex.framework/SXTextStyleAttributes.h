/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXTextStyleAttributes : NSObject <NSCopying> {
    NSMutableDictionary * _mutableAttributes;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSMutableDictionary *mutableAttributes;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

+ (id)attributesWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

- (void).cxx_destruct;
- (void)addAttribute:(id)arg1 value:(id)arg2;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)mutableAttributes;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;

@end
