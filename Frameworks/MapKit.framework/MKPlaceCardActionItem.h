/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceCardActionItem : NSObject {
    _MKMapItemAttribution * _attribution;
    NSString * _displayString;
    bool  _enabled;
    NSString * _glyph;
    UIColor * _glyphColor;
    bool  _selected;
    MKPlaceCardActionItem * _selectedItem;
    unsigned long long  _type;
    NSArray * _urlStrings;
    id  _value;
}

@property (nonatomic, retain) _MKMapItemAttribution *attribution;
@property (nonatomic, readonly, copy) NSString *displayString;
@property (nonatomic) bool enabled;
@property (nonatomic, copy) NSString *glyph;
@property (nonatomic, retain) UIColor *glyphColor;
@property (nonatomic) bool selected;
@property (nonatomic, retain) MKPlaceCardActionItem *selectedItem;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSArray *urlStrings;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (id)attribution;
- (id)displayString;
- (bool)enabled;
- (id)glyph;
- (id)glyphColor;
- (id)initWithType:(unsigned long long)arg1 displayString:(id)arg2 enabled:(bool)arg3;
- (id)initWithType:(unsigned long long)arg1 displayString:(id)arg2 enabled:(bool)arg3 urlStrings:(id)arg4 attribution:(id)arg5;
- (bool)selected;
- (id)selectedItem;
- (void)setAttribution:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGlyph:(id)arg1;
- (void)setGlyphColor:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedItem:(id)arg1;
- (void)setValue:(id)arg1;
- (unsigned long long)type;
- (id)urlStrings;
- (id)value;

@end
