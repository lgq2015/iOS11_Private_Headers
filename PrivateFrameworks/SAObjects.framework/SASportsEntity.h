/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsEntity : SADomainObject

@property (nonatomic, copy) NSURL *image;
@property (nonatomic, copy) NSDictionary *images;
@property (nonatomic, copy) NSURL *largeImage;
@property (nonatomic, copy) NSDictionary *largeImages;
@property (nonatomic, retain) SASportsLeague *league;
@property (nonatomic, copy) NSURL *listImage;
@property (nonatomic, copy) NSDictionary *listImages;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) SAUIAppPunchOut *punchout;
@property (nonatomic, copy) NSArray *themeImages;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)entity;
+ (id)entityWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)image;
- (id)images;
- (id)largeImage;
- (id)largeImages;
- (id)league;
- (id)listImage;
- (id)listImages;
- (id)name;
- (id)punchout;
- (void)setImage:(id)arg1;
- (void)setImages:(id)arg1;
- (void)setLargeImage:(id)arg1;
- (void)setLargeImages:(id)arg1;
- (void)setLeague:(id)arg1;
- (void)setListImage:(id)arg1;
- (void)setListImages:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPunchout:(id)arg1;
- (void)setThemeImages:(id)arg1;
- (id)themeImages;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (bool)siriui_containsAthletes;
- (bool)siriui_containsTeams;
- (id)siriui_displayName;
- (void)siriui_enumerateEntitiesWithGroupHandler:(id /* block */)arg1 teamHandler:(id /* block */)arg2 athleteHandler:(id /* block */)arg3;

@end
