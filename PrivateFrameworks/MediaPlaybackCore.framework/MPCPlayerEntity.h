/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayerEntity : NSObject {
    MPCPlayerItemContainer * _container;
    bool  _explicit;
    MPModelPlayEvent * _modelPlayEventRepresentation;
    NSString * _title;
    NSDictionary * _userInfo;
}

@property (nonatomic) MPCPlayerItemContainer *container;
@property (getter=isExplicit, nonatomic, readonly) bool explicit;
@property (nonatomic, readonly) MPModelPlayEvent *modelPlayEventRepresentation;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)artworkCatalog;
- (id)container;
- (bool)isExplicit;
- (id)modelPlayEventRepresentation;
- (void)setContainer:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)title;
- (id)userInfo;

@end
