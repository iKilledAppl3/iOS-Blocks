//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCWeatherObserver.h"
#import "UIAlertViewDelegate.h"

@class FCCurrentWeatherView, FCForecastViewController, FCWeatherWallpaper, NSString;

@interface FCForecastController : NSObject <UIAlertViewDelegate, FCWeatherObserver>
{
    FCWeatherWallpaper *_wallpaper;
    FCCurrentWeatherView *_currentWeatherView;
    FCForecastViewController *_forecastViewController;
}

+ (void)crash;
+ (id)sharedInstance;
+ (void)initialize;
+ (id)identifierForCode:(long long)arg1 isDay:(_Bool)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateForLegibilitySettings:(id)arg1 animated:(_Bool)arg2;
- (void)updateForCity:(id)arg1;
- (void)updateForCity:(id)arg1 animated:(_Bool)arg2;
- (void)_animateDisplayOfView:(id)arg1;
- (id)forecastViewController;
- (id)currentWeatherView;
- (id)wallpaper;
- (void)tappedCurrent:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
