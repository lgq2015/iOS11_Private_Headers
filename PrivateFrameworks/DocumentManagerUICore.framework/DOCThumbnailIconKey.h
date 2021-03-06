/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCThumbnailIconKey : NSObject <NSCopying> {
    bool  _folded;
    NSString * _type;
}

@property (nonatomic, readonly) bool folded;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)folded;
- (unsigned long long)hash;
- (id)initWithType:(id)arg1 folded:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (id)type;

@end
