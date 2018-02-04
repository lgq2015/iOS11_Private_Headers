/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessoryNavigation.framework/AccessoryNavigation
 */

@interface ACCNavigationAccessoryComponent : NSObject {
    unsigned long long  _identifier;
    bool  _isEnabled;
    unsigned long long  _maxCapacity_GuidanceManeuver;
    unsigned long long  _maxLength_CurrentRoadName;
    unsigned long long  _maxLength_DestinationRoadName;
    unsigned long long  _maxLength_ManeuverDescription;
    unsigned long long  _maxLength_PostManeuverRoadName;
    NSString * _name;
}

@property unsigned long long identifier;
@property bool isEnabled;
@property unsigned long long maxCapacity_GuidanceManeuver;
@property unsigned long long maxLength_CurrentRoadName;
@property unsigned long long maxLength_DestinationRoadName;
@property unsigned long long maxLength_ManeuverDescription;
@property unsigned long long maxLength_PostManeuverRoadName;
@property (retain) NSString *name;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maxCapacity_GuidanceManeuver;
- (unsigned long long)maxLength_CurrentRoadName;
- (unsigned long long)maxLength_DestinationRoadName;
- (unsigned long long)maxLength_ManeuverDescription;
- (unsigned long long)maxLength_PostManeuverRoadName;
- (id)name;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setMaxCapacity_GuidanceManeuver:(unsigned long long)arg1;
- (void)setMaxLength_CurrentRoadName:(unsigned long long)arg1;
- (void)setMaxLength_DestinationRoadName:(unsigned long long)arg1;
- (void)setMaxLength_ManeuverDescription:(unsigned long long)arg1;
- (void)setMaxLength_PostManeuverRoadName:(unsigned long long)arg1;
- (void)setName:(id)arg1;

@end
