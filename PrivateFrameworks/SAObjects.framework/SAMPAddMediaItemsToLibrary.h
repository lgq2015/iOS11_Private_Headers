/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPAddMediaItemsToLibrary : SABaseClientBoundCommand

@property (nonatomic, retain) SAMPCollection *mediaItems;

+ (id)addMediaItemsToLibrary;
+ (id)addMediaItemsToLibraryWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)mediaItems;
- (bool)requiresResponse;
- (void)setMediaItems:(id)arg1;

@end
