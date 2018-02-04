/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface _PLDescriptionStyle : NSObject {
    long long  _extraIndent;
    NSString * _fieldSeparator;
    NSString * _initialFieldSeparator;
    NSString * _nameValueSeparator;
    NSString * _suffix;
}

@property (readonly) long long extraIndent;
@property (readonly, copy) NSString *fieldSeparator;
@property (readonly, copy) NSString *initialFieldSeparator;
@property (readonly, copy) NSString *nameValueSeparator;
@property (readonly, copy) NSString *suffix;

+ (id)styleForEnum:(long long)arg1;

- (void)dealloc;
- (long long)extraIndent;
- (id)fieldSeparator;
- (id)initWithIntialFieldSeparator:(id)arg1 fieldSeparator:(id)arg2 nameValueSeparator:(id)arg3 suffix:(id)arg4 extraIndent:(long long)arg5;
- (id)initialFieldSeparator;
- (id)nameValueSeparator;
- (id)suffix;

@end
