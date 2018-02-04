/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaQueryQueueFeederItemIdentifier : NSObject <MPAVItemQueueIdentifier, NSSecureCoding> {
    unsigned long long  _feederRevisionID;
    MPMediaItem * _mediaItem;
    unsigned long long  _repeatIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long feederRevisionID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPMediaItem *mediaItem;
@property (nonatomic, readonly) unsigned long long repeatIndex;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)feederRevisionID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaItem:(id)arg1 repeatIndex:(unsigned long long)arg2 feederRevisionID:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)mediaItem;
- (unsigned long long)repeatIndex;

@end
