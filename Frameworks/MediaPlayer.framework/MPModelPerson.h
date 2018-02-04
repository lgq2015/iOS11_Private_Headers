/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelPerson : MPModelObject {
    bool  _hasSocialPosts;
    NSString * _name;
}

@property (nonatomic) bool hasSocialPosts;
@property (nonatomic, copy) NSString *name;

+ (id)__MPModelPropertyPersonHasSocialPosts__PROPERTY;
+ (id)__MPModelPropertyPersonName__PROPERTY;
+ (id)__hasSocialPosts__KEY;
+ (id)__name__KEY;

- (void).cxx_destruct;
- (id)descriptionWithType:(long long)arg1;
- (bool)hasSocialPosts;
- (id)name;
- (void)setHasSocialPosts:(bool)arg1;
- (void)setName:(id)arg1;

@end
