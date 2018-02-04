/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXFontFamily : NSObject <SXFontFamily> {
    NSString * _familyName;
    NSSet * _fontFaces;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) NSSet *fontFaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)familyName;
- (id)fontFaces;
- (id)initWithFamilyName:(id)arg1 faces:(id)arg2;

@end
