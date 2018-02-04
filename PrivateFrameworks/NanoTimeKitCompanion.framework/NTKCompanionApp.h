/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCompanionApp : NSObject {
    NSString * _containerApplicationIdentifier;
    <NTKCompanionAppDelegate> * _delegate;
    bool  _fetchingIcon;
    UIImage * _icon;
    NSString * _name;
    NSString * _watchApplicationIdentifier;
}

@property (nonatomic, retain) NSString *containerApplicationIdentifier;
@property (nonatomic) <NTKCompanionAppDelegate> *delegate;
@property (nonatomic) bool fetchingIcon;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *watchApplicationIdentifier;

- (void).cxx_destruct;
- (id)complication;
- (id)containerApplicationIdentifier;
- (id)delegate;
- (bool)fetchingIcon;
- (id)icon;
- (id)name;
- (void)setContainerApplicationIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFetchingIcon:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setName:(id)arg1;
- (void)setWatchApplicationIdentifier:(id)arg1;
- (id)watchApplicationIdentifier;

@end
