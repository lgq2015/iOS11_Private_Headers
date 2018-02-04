/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreLibraryPersonalizationContentDescriptor : NSObject {
    MPModelObject * _model;
    long long  _personalizationStyle;
}

@property (nonatomic, readonly) MPModelObject *model;
@property (nonatomic, readonly) long long personalizationStyle;

- (void).cxx_destruct;
- (id)initWithModel:(id)arg1 personalizationStyle:(long long)arg2;
- (id)model;
- (long long)personalizationStyle;

@end
