/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelRadioStationBuilder : NSObject {
    MPPropertySet * _requestedProperties;
    struct { 
        unsigned int initialized : 1; 
        unsigned int beats1 : 1; 
        unsigned int name : 1; 
        unsigned int editorNotes : 1; 
        unsigned int shortEditorNotes : 1; 
        unsigned int explicit; 
        unsigned int artwork : 1; 
        unsigned int allowsItemLiking : 1; 
    }  _requestedRadioStationProperties;
}

@property (nonatomic, readonly, copy) MPPropertySet *requestedProperties;

- (void).cxx_destruct;
- (id)initWithRequestedProperties:(id)arg1;
- (id)modelRadioStationForMetadata:(id)arg1;
- (id)requestedProperties;

@end
