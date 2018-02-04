/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCIconThumbnail : DOCBaseThumbnail {
    NSString * _contentType;
    bool  _folded;
}

@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic) bool folded;

- (void).cxx_destruct;
- (id)contentType;
- (id)createOperationWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 style:(unsigned long long)arg3;
- (bool)folded;
- (id)initWithCache:(id)arg1 contentType:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 scale:(double)arg4 fallback:(id)arg5 style:(unsigned long long)arg6 folded:(bool)arg7 qos:(unsigned int)arg8;
- (void)setFolded:(bool)arg1;

@end
