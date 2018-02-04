/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKPlayEvent : NSObject {
    NSString * _bundleID;
    NSString * _channelID;
    double  _duration;
    double  _elapsedTime;
    NSString * _externalPlayableID;
    NSDate * _occurrenceDate;
    bool  _played;
    NSString * _showID;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSString *channelID;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double elapsedTime;
@property (nonatomic, readonly, copy) NSString *externalPlayableID;
@property (nonatomic, readonly, copy) NSDate *occurrenceDate;
@property (getter=isPlayed, nonatomic, readonly) bool played;
@property (nonatomic, readonly, copy) NSString *showID;

- (void).cxx_destruct;
- (id)bundleID;
- (id)channelID;
- (id)description;
- (double)duration;
- (double)elapsedTime;
- (id)externalPlayableID;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)isPlayed;
- (id)occurrenceDate;
- (id)showID;

@end
