/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOMapItemTransitInfoSnippetLabelItem : NSObject <GEOTransitLabelItem> {
    <GEOTransitArtworkDataSource> * _labelArtwork;
    NSString * _labelString;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *labelArtwork;
@property (nonatomic, readonly) NSString *labelString;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 labelString:(id)arg2 labelArtwork:(id)arg3;
- (id)labelArtwork;
- (id)labelString;
- (long long)type;

@end
