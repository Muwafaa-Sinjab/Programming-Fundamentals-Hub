# Networks: The Fundamentals

## What a Network Is

A network is simply a group of devices connected together so they can share data and resources.

## Devices Typically Involved

Phones, laptops, desktop computers, tablets, printers, smart TVs, and smart-home gadgets all commonly join a network.

## A Familiar Example

Think of any household: phones, a laptop, a smart TV, and a printer might all be connected to the same Wi-Fi. That collection of connected devices is itself a network.

## Why Networks Exist

- **Exchanging data** — sending a file or photo from one device to another
- **Sharing resources** — one printer serving several computers, or accessing files stored on a different machine
- **Remote control** — adjusting a thermostat or TV from a phone
- **Communication** — messaging, voice calls, and video calls between devices

## LAN: Local Area Network

**Definition:** a network connecting devices that are physically close together, typically within one building or site.

**Traits:**
- Devices are near each other
- Transfers data quickly
- Cheaper to set up and run
- Easier to secure since it's contained
- Straightforward to manage

**Common examples:** a home network, a single office building, one campus of a school, a restaurant's internal network, a single clinic.

## WAN: Wide Area Network

**Definition:** a network that links multiple LANs together across large distances.

**Traits:**
- Spans cities, countries, or continents
- Made up of several connected LANs
- Generally slower than a LAN
- More expensive to maintain
- Harder to manage due to scale

**Example:** a retail chain with stores in Cairo, Amman, Istanbul, and Nairobi — each store's internal network is a LAN, and the connection tying them all together forms one WAN.

## Two Ways Devices Connect

### Wired

- Physical cables carry the connection
- Fast and consistent performance
- Harder to intercept, so generally more secure
- Costs more to install due to cabling

**Typical technology:** Ethernet

```
Laptop 1 ----┐
              ├── Switch ──── Server
Laptop 2 ----┘
```

### Wireless

- No cables required
- Devices can move freely within range
- Quick and flexible to set up
- Can be less stable or slower depending on distance and interference

**Typical technology:** Wi-Fi

```
Phone     )))
Tablet    ))) ──── Router
Speaker   )))
```

## Key Terms

**Ethernet** — the set of standards governing how wired devices communicate on a network.

**Wi-Fi** — a widely recognized name for wireless networking technology; the underlying technical standard has a more complex official name, and "Wi-Fi" became the popular, easy-to-remember term for it.

**Protocol** — an agreed set of rules devices follow to communicate. A useful comparison: traffic lights work because every driver follows the same rule set (stop on red, go on green) — protocols serve the same purpose for devices exchanging data.

## LAN vs. WAN at a Glance

| Aspect              | LAN                      | WAN                          |
|-----------------------|----------------------------|---------------------------------|
| Geographic reach        | Small (single site)         | Large (multi-city/country)       |
| Speed                    | Very fast                    | Moderate to fast                  |
| Cost                      | Lower                         | Higher                             |
| Device count               | Small to moderate              | Very large                          |
| Management complexity       | Simple                          | Complex                              |
| Security                     | Easier to secure                 | Requires extra safeguards             |
| Typical ownership              | One person or organization        | Multiple organizations often involved  |

## Wired vs. Wireless at a Glance

| Aspect            | Wired                       | Wireless                    |
|---------------------|--------------------------------|---------------------------------|
| Speed                 | Higher and more consistent      | Solid but distance-dependent      |
| Security                | Stronger by default              | Depends on encryption strength     |
| Setup effort              | Requires running cables            | Fast to configure                    |
| Mobility                    | Restricted by cable length          | Free movement within range            |
| Upfront cost                  | Higher                                | Lower                                   |
| Ongoing maintenance              | Cables may need replacing              | Generally low-maintenance                 |

## Everyday Scenarios

**A household LAN:**
```
Router connects:
├── Phone (Wi-Fi)
├── Desktop PC (Ethernet)
├── Smart TV (Wi-Fi)
├── Printer (Wi-Fi)
└── Smart lighting (Wi-Fi)
```

**A university:**
```
Separate LANs per building:
├── Science building
├── Library
├── Administration
└── Dormitories

Linked together = campus-wide WAN
```

**An international company:**
```
├── Amman office (LAN)
├── Doha office (LAN)
├── Casablanca office (LAN)
└── Berlin office (LAN)

All linked = corporate WAN
```

## Key Networking Devices

**Switch** — connects multiple devices within a single local network.

```
[Device A] ──┐
              ├── [Switch] ──── [Server]
[Device B] ──┘
```

Switches are used strictly in wired setups.

**Router** — connects separate networks to one another, most commonly a home or office LAN to the wider internet.

```
[Local Network] ──── [Router] ──── [Internet]
                        │
                  [Wireless Devices]
```

Routers handle both wired and wireless connections.

## Key Takeaway

A network is any set of connected devices sharing data and resources. LANs cover small, local areas while WANs stretch across much larger distances by linking multiple LANs. Devices connect either by cable (Ethernet) or wirelessly (Wi-Fi), and protocols are the shared rules that let all of this communication actually work.

---

**Muwafaa Sinjab**

GitHub: **@Muwafaa-Sinjab**
