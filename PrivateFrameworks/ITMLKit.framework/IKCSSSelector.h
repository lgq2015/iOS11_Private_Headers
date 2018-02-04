/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKCSSSelector : NSObject {
    NSString * _name;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    long long  _type;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) NSString *stringValue;
@property long long type;

- (void).cxx_destruct;
- (id)description;
- (id)name;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setName:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setType:(long long)arg1;
- (id)stringValue;
- (long long)type;

@end
