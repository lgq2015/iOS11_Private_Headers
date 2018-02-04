/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKGameSharingInfo : NSObject {
    bool  _complete;
    NSString * _developerName;
    NSString * _emailBody;
    NSString * _emailSubject;
    NSString * _gameName;
    UIImage * _iconImage;
    NSURL * _shortViewItemURL;
    NSURL * _viewItemURL;
}

@property (nonatomic) bool complete;
@property (nonatomic, retain) NSString *developerName;
@property (nonatomic, retain) NSString *emailBody;
@property (nonatomic, retain) NSString *emailSubject;
@property (nonatomic, retain) NSString *gameName;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, retain) NSURL *shortViewItemURL;
@property (nonatomic, retain) NSURL *viewItemURL;

- (bool)complete;
- (void)dealloc;
- (id)developerName;
- (id)emailBody;
- (id)emailSubject;
- (id)gameName;
- (id)iconImage;
- (id)initWithGame:(id)arg1;
- (id)itemsForActivityType:(id)arg1;
- (id)operationThatBlocksUntilLoaded;
- (void)setComplete:(bool)arg1;
- (void)setDeveloperName:(id)arg1;
- (void)setEmailBody:(id)arg1;
- (void)setEmailSubject:(id)arg1;
- (void)setGameName:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setShortViewItemURL:(id)arg1;
- (void)setViewItemURL:(id)arg1;
- (id)shortViewItemURL;
- (id)subjectForEmailActivity;
- (id)thumbnailForActivityType:(id)arg1;
- (id)viewItemURL;

@end
