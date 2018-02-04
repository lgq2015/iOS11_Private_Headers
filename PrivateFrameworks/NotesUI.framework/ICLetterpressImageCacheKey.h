/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICLetterpressImageCacheKey : NSObject <NSCopying> {
    NSString * _name;
    double  _scale;
    UIColor * _tintColor;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) UIColor *tintColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 tintColor:(id)arg2 scale:(double)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (double)scale;
- (id)tintColor;

@end
