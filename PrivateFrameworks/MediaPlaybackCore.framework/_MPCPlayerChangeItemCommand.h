/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCPlayerChangeItemCommand : _MPCPlayerCommand <MPCPlayerChangeItemCommand> {
    bool  _supportsJumpToItem;
    bool  _supportsNextChapter;
    bool  _supportsNextItem;
    bool  _supportsNextSection;
    bool  _supportsPreviousChapter;
    bool  _supportsPreviousItem;
    bool  _supportsPreviousSection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsJumpToItem;
@property (nonatomic) bool supportsNextChapter;
@property (nonatomic) bool supportsNextItem;
@property (nonatomic) bool supportsNextSection;
@property (nonatomic) bool supportsPreviousChapter;
@property (nonatomic) bool supportsPreviousItem;
@property (nonatomic) bool supportsPreviousSection;

- (id)changeToItem:(id)arg1;
- (id)changeToSection:(id)arg1;
- (id)nextChapter;
- (id)nextItem;
- (id)nextSection;
- (id)previousChapter;
- (id)previousItem;
- (id)previousSection;
- (void)setSupportsJumpToItem:(bool)arg1;
- (void)setSupportsNextChapter:(bool)arg1;
- (void)setSupportsNextItem:(bool)arg1;
- (void)setSupportsNextSection:(bool)arg1;
- (void)setSupportsPreviousChapter:(bool)arg1;
- (void)setSupportsPreviousItem:(bool)arg1;
- (void)setSupportsPreviousSection:(bool)arg1;
- (bool)supportsJumpToItem;
- (bool)supportsNextChapter;
- (bool)supportsNextItem;
- (bool)supportsNextSection;
- (bool)supportsPreviousChapter;
- (bool)supportsPreviousItem;
- (bool)supportsPreviousSection;

@end