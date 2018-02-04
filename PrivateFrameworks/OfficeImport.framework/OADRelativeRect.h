/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADRelativeRect : NSObject <NSCopying> {
    float  mBottom;
    float  mLeft;
    float  mRight;
    float  mTop;
}

- (float)bottom;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithLeft:(float)arg1 top:(float)arg2 right:(float)arg3 bottom:(float)arg4;
- (bool)isEqual:(id)arg1;
- (float)left;
- (float)right;
- (void)setBottom:(float)arg1;
- (void)setLeft:(float)arg1;
- (void)setRight:(float)arg1;
- (void)setTop:(float)arg1;
- (float)top;

@end
