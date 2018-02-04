/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelRadioContentReference : NSObject <NSCopying> {
    ICRadioContentReference * _ICRadioContentReference;
}

@property (nonatomic, readonly) ICRadioContentReference *ICRadioContentReference;

+ (id)referenceWithMPModelObject:(id)arg1;

- (void).cxx_destruct;
- (id)ICRadioContentReference;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithICRadioContentReference:(id)arg1;

@end
