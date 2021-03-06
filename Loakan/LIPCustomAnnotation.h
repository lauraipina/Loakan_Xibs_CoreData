//
//  LIPCustomAnnotation.h
//  Loakan
//
//  Created by Laura Iglesias Piña on 23/2/15.
//  Copyright (c) 2015 lip. All rights reserved.
//

@import Foundation;
#import <MapKit/MapKit.h>

// Implementamos el protocolo MKAnnotation
@interface LIPCustomAnnotation : NSObject <MKAnnotation>{
    // Creamos un título
    NSString *title;
    // Declaramos un subtítulo
    NSString *subtitle;
    // Y una coordenada
    CLLocationCoordinate2D coordinate;
}

// Definimos sus propiedades
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;

// Y el método de inicialización
- (id)initWithTitle:(NSString *)aTitle subtitle:(NSString*)aSubtitle andCoordinate:(CLLocationCoordinate2D)coord;

@end
